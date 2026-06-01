/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_591D0
// Address: 0x000591D0

//----- (000591D0) --------------------------------------------------------
int __fastcall sub_591D0(int a1, int a2, int a3)
{
  unsigned int v4; // r0
  int *v5; // r1
  int v6; // r5
  char *v7; // r6
  int v8; // r6
  int v9; // r4
  int v10; // r1
  unsigned int v11; // r7
  bool v12; // zf
  int v13; // r4
  unsigned int v14; // r6
  int v15; // r5
  unsigned __int8 *v16; // r1
  int v17; // r0
  size_t v18; // r6
  int *v19; // r2
  int v20; // r7
  void *v21; // r0
  int *v22; // r5
  int v23; // r0
  int v25; // [sp+20h] [bp-478h]
  char *v26; // [sp+24h] [bp-474h]
  char *s; // [sp+2Ch] [bp-46Ch]
  int v30; // [sp+40h] [bp-458h]
  void *v31; // [sp+48h] [bp-450h] BYREF
  int v32; // [sp+4Ch] [bp-44Ch]
  int v33; // [sp+50h] [bp-448h]
  _UNKNOWN **v34; // [sp+54h] [bp-444h] BYREF
  _DWORD v35[272]; // [sp+58h] [bp-440h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 24);
  s = *(char **)a2;
  v32 = 0;
  v31 = nullptr;
  v33 = 0;
  v26 = (char *)(a2 + 1050);
  v5 = (int *)(a2 + 26);
  v30 = a2;
  v25 = a2 + 16;
  v6 = -1;
  v7 = &byte_B3CBE;
  if ( !v4 )
  {
LABEL_14:
    v15 = *(_DWORD *)(v30 + 12);
    v16 = (unsigned __int8 *)&byte_B3CBE;
    if ( *(_DWORD *)(a3 + 4) )
      v16 = *(unsigned __int8 **)a3;
    sub_218FC((int)&v34, v16, 0, s, v26, 0, v7);
    v35[270] = v15;
    v35[269] = v25;
    v34 = &off_DA010;
    v6 = -1;
    if ( sub_21ABC((int)&v34) )
    {
      if ( a1 )
      {
        v17 = _strlen_chk(v35, 1084);
        v18 = v17;
        v19 = (int *)a1;
        if ( v17 )
        {
          v20 = v17 + 1;
          if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v17 + 1) )
          {
            v21 = *(void **)a1;
          }
          else
          {
            v21 = qvector_reserve(a1, *(void **)a1, v17 + 1, 1u);
            v19 = (int *)a1;
            *(_DWORD *)a1 = v21;
          }
          v19[1] = v20;
          v22 = v19;
          memmove(v21, v35, v18);
          v23 = *v22;
          v6 = 0;
          *(_BYTE *)(v23 + v18) = 0;
        }
        else
        {
          v6 = 0;
          *(_DWORD *)(a1 + 4) = 0;
        }
      }
      else
      {
        v6 = 0;
      }
    }
    sub_21E90((int)&v34);
    if ( v31 )
    {
      v32 = 0;
      qfree(v31);
      v33 = 0;
      v31 = nullptr;
    }
    return v6;
  }
  if ( v4 >= 0xC )
  {
    v8 = (*(_DWORD *)(v30 + 30) << 24)
       + ((*(_DWORD *)(v30 + 30) << 8) & 0xFF0000)
       + ((*(_DWORD *)(v30 + 30) >> 8) & 0xFF00)
       + HIBYTE(*(_DWORD *)(v30 + 30));
    if ( !*(_BYTE *)(v30 + 16) )
      v8 = *(_DWORD *)(v30 + 30);
    v9 = *v5;
    v10 = (*v5 << 24) + ((*v5 << 8) & 0xFF0000) + (((unsigned int)*v5 >> 8) & 0xFF00) + HIBYTE(*v5);
    if ( !*(_BYTE *)(v30 + 16) )
      v10 = v9;
    v6 = -1;
    if ( v10 + v8 + 12 <= v4 )
    {
      v11 = v8;
      v12 = v8 == 0;
      v7 = &byte_B3CBE;
      if ( !v12 )
      {
        v13 = v30 + v10 + 38;
        v14 = 0;
        do
          sub_28C8C((int)&v31, "%02x", *(unsigned __int8 *)(v13 + v14++));
        while ( v14 < v11 );
        if ( v32 )
          v7 = (char *)v31;
        else
          v7 = &byte_B3CBE;
      }
      goto LABEL_14;
    }
  }
  return v6;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
// DA010: using guessed type _UNKNOWN *off_DA010;
