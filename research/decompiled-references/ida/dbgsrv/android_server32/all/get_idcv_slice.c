/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_slice
// Address: 0x00044E4C

//----- (00044E4C) --------------------------------------------------------
int __fastcall get_idcv_slice(int a1, unsigned __int8 *a2, int a3, unsigned int a4, int a5)
{
  unsigned __int8 *v6; // r7
  int v7; // r0
  int v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r2
  bool v12; // cc
  unsigned int v13; // r1
  unsigned int v14; // r2
  int v15; // r3
  unsigned int v16; // r3
  int v17; // r1
  int v18; // r2
  char *v19; // r7
  int v21; // r4
  int v22; // r6
  _DWORD *v23; // r2
  const char *v24; // r7
  _DWORD *v25; // r5
  const char *v26; // r0
  int v27; // r0
  int *v28; // r1
  char *v29; // r1
  char *v30; // r7
  int v31; // r0
  unsigned __int8 *v32; // r1
  int v33; // r2
  _DWORD *v34; // r0
  _DWORD *v35; // r0
  bool v36; // zf
  int v37; // r1
  int v38; // r5
  int v39; // r5
  void *v40; // [sp+Ch] [bp-74h]
  char *s1; // [sp+1Ch] [bp-64h]
  _DWORD *ptr; // [sp+20h] [bp-60h]
  _DWORD v45[6]; // [sp+2Ch] [bp-54h] BYREF
  char s[32]; // [sp+44h] [bp-3Ch] BYREF
  _DWORD v47[6]; // [sp+64h] [bp-1Ch] BYREF

  if ( !a1 )
    return set_qerrno(1568);
  v6 = a2;
  if ( !a2 )
    return set_qerrno(1568);
  while ( 1 )
  {
    v7 = *v6;
    if ( v7 != 10 )
      break;
    v6 = deref_idcv(v6, 0);
    if ( !v6 )
      return get_qerrno();
  }
  if ( v7 == 5 )
  {
    if ( a5 << 31 )
    {
      qsnprintf(s, 32, "%u");
      return get_idcv_attr(a1, (int)v6, s, 0);
    }
    LOBYTE(v45[0]) = 5;
    memset(&v45[3], 0, 12);
    ptr = operator new(0x14u);
    sub_3F83C(ptr, 0);
    v40 = (void *)a1;
    v45[2] = ptr;
    v21 = *((_DWORD *)v6 + 2);
    sub_1B09C((int)v47, &byte_ADB63);
    v22 = *(_DWORD *)(v21 + 4);
    v23 = (_DWORD *)(v21 + 4);
    if ( v22 )
    {
      v24 = &byte_B3CBE;
      if ( v47[1] )
        v24 = (const char *)v47[0];
      s1 = (char *)v47[0];
      v25 = (_DWORD *)(v21 + 4);
      do
      {
        v26 = &byte_B3CBE;
        if ( *(_DWORD *)(v22 + 20) )
          v26 = *(const char **)(v22 + 16);
        v27 = strcmp(v26, v24);
        if ( v27 >= 0 )
          v25 = (_DWORD *)v22;
        v28 = (int *)(v22 + 4);
        if ( v27 >= 0 )
          v28 = (int *)v22;
        v22 = *v28;
      }
      while ( *v28 );
      v23 = (_DWORD *)(v21 + 4);
      v29 = s1;
    }
    else
    {
      v29 = (char *)v47[0];
      v25 = (_DWORD *)(v21 + 4);
    }
    if ( v29 )
    {
      v47[1] = 0;
      qfree(v29);
      v47[2] = 0;
      v47[0] = 0;
      v23 = (_DWORD *)(v21 + 4);
    }
    if ( v25 != v23 )
    {
      do
      {
        v30 = &byte_B3CBE;
        if ( v25[5] )
          v30 = (char *)v25[4];
        if ( strcmp(v30, ":") >= 0 )
          break;
        v31 = (unsigned __int8)*v30;
        if ( *v30 )
        {
          if ( v31 == 48 )
          {
            if ( !v30[1] )
            {
LABEL_55:
              qsscanf((int)v30, "%u");
              if ( v47[0] >= (unsigned int)a3 && (a4 == 0x7FFFFFFF || v47[0] < a4) )
              {
                qsnprintf(s, 32, "%u");
                v19 = (char *)set_idcv_attr((int)v45, s, (unsigned __int8 *)v25 + 32, 0);
                v33 = 1;
                if ( v19 )
                  goto LABEL_65;
              }
            }
          }
          else
          {
            v32 = (unsigned __int8 *)(v30 + 1);
            while ( (v31 & 0x80u) == 0 && (unsigned int)(unsigned __int8)v31 - 48 <= 9 )
            {
              v31 = *v32++;
              if ( !v31 )
                goto LABEL_55;
            }
          }
        }
        v34 = (_DWORD *)v25[1];
        if ( v34 )
        {
          do
          {
            v25 = v34;
            v34 = (_DWORD *)*v34;
          }
          while ( v34 );
        }
        else
        {
          v35 = v25 + 2;
          v36 = *(_DWORD *)v25[2] == (_DWORD)v25;
          v25 = (_DWORD *)v25[2];
          if ( !v36 )
          {
            do
            {
              v37 = *v35;
              v35 = (_DWORD *)(*v35 + 8);
              v25 = *(_DWORD **)(v37 + 8);
            }
            while ( *v25 != v37 );
          }
        }
      }
      while ( v25 != (_DWORD *)(v21 + 4) );
    }
    qmemcpy(v47, v40, sizeof(v47));
    qmemcpy(v40, v45, 0x18u);
    v45[0] = v47[0];
    v45[1] = v47[1];
    v45[2] = v47[2];
    v45[3] = v47[3];
    v45[4] = v47[4];
    v45[5] = v47[5];
    v19 = s;
    v33 = 0;
LABEL_65:
    if ( LOBYTE(v45[0]) == 5 )
    {
      v39 = v33;
      sub_448A0(v45[2], (unsigned __int8 *)v45);
      v33 = v39;
    }
    else if ( LOBYTE(v45[0]) == 7 && v45[2] )
    {
      v38 = v33;
      v45[3] = 0;
      qfree((void *)v45[2]);
      v45[4] = 0;
      v45[2] = 0;
      if ( v38 )
        return (int)v19;
      return 0;
    }
    if ( v33 )
      return (int)v19;
    return 0;
  }
  if ( v7 != 7 )
    return set_qerrno(1568);
  v9 = *((_DWORD *)v6 + 3);
  v10 = v9 - 1;
  if ( !v9 )
    v10 = 0;
  v11 = a3;
  if ( a3 < 0 )
    v11 = (v10 + a3) & ~((int)(v10 + a3) >> 31);
  v12 = v11 > v10;
  v13 = v11;
  v14 = v10;
  if ( !v12 )
    v14 = v13;
  v15 = a4;
  if ( a5 << 31 )
    v15 = v14 + 1;
  if ( v15 < 0 )
    v15 = (v15 + v10) & ~((int)(v15 + v10) >> 31);
  if ( v15 <= v10 )
    v10 = v15;
  v16 = v14;
  if ( v14 <= v10 )
    v16 = v10;
  sub_266B8(v47, (const void *)(*((_DWORD *)v6 + 2) + v14), v16 - v14);
  free_idcv((unsigned __int8 *)a1);
  *(_BYTE *)a1 = 7;
  v17 = v47[1];
  v18 = v47[2];
  *(_DWORD *)(a1 + 8) = v47[0];
  *(_DWORD *)(a1 + 12) = v17;
  *(_DWORD *)(a1 + 16) = v18;
  return 0;
}
// ADB63: using guessed type char byte_ADB63;
// B3CBE: using guessed type char byte_B3CBE;
