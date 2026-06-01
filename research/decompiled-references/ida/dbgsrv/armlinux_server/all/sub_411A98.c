/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411A98
// Address: 0x0000000000411A98

//----- (0000000000411A98) ----------------------------------------------------
__int64 __fastcall sub_411A98(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v4; // x22
  __int64 v5; // x19
  int v7; // w24
  unsigned int *v8; // x21
  int v9; // w3
  signed int v10; // w0
  __int64 v11; // x3
  _QWORD *v12; // x19
  char *v13; // x3
  _DWORD *v14; // x4
  _DWORD *v15; // x0
  int v16; // w19
  __int64 i; // x1
  int v19; // w0
  unsigned int v20; // w21
  char *v21; // x0
  void *v22; // x0
  unsigned __int64 v23; // x3
  void *v24; // x0
  __int64 v25; // x1
  __int64 v26; // [xsp+70h] [xbp-40h] BYREF
  void *ptr; // [xsp+78h] [xbp-38h] BYREF
  __int64 v28; // [xsp+80h] [xbp-30h]
  unsigned __int64 v29; // [xsp+88h] [xbp-28h]
  void *v30; // [xsp+90h] [xbp-20h] BYREF
  unsigned __int64 v31; // [xsp+98h] [xbp-18h]
  unsigned __int64 v32; // [xsp+A0h] [xbp-10h]

  v4 = a1 + 1920;
  v5 = *(_QWORD *)(a1 + 1936);
  ptr = nullptr;
  v28 = 0;
  v29 = 0;
  v30 = nullptr;
  v31 = 0;
  v32 = 0;
  if ( v5 == a1 + 1920 )
    goto LABEL_22;
  v7 = a3;
  do
  {
    if ( (*(_DWORD *)(v5 + 32) == a2) == v7 )
      goto LABEL_8;
    v8 = (unsigned int *)(v5 + 40);
    if ( *(_DWORD *)(v5 + 60) || *(_BYTE *)(v5 + 64) || *(_BYTE *)(v5 + 65) )
      goto LABEL_7;
    if ( !(unsigned int)sub_408610(*v8, 0x13u) )
    {
      v24 = ptr;
      v25 = v28;
      v26 = v5 + 40;
      if ( v29 < v28 + 1 )
      {
        v24 = sub_491288((__int64)&ptr, ptr, v28 + 1, 8u);
        v25 = v28;
        ptr = v24;
      }
      *((_QWORD *)v24 + v25) = v8;
      *(_BYTE *)(v5 + 64) = 1;
      ++v28;
LABEL_7:
      ++*(_DWORD *)(v5 + 44);
      goto LABEL_8;
    }
    v19 = *__errno_location();
    v20 = *v8;
    if ( v19 == 3 )
    {
      v22 = v30;
      v23 = v31;
      if ( v31 + 1 > v32 )
      {
        v22 = sub_491288((__int64)&v30, v30, v31 + 1, 4u);
        v23 = v31;
        v30 = v22;
      }
      *((_DWORD *)v22 + v23) = v20;
      ++v31;
    }
    else
    {
      v21 = strerror(v19);
      sub_40AAF0(a1, (__int64)"failed to send SIGSTOP to thread %d: %s\n", v20, v21);
    }
LABEL_8:
    v5 = sub_49F6E8(v5);
  }
  while ( v4 != v5 );
  if ( v28 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = -*(unsigned __int8 *)(a1 + 2053);
        LODWORD(v26) = 0;
        v10 = sub_417EA0(a1, (int *)&v26, -1, v9);
        v11 = v28;
        if ( v10 > 0 )
          break;
LABEL_17:
        if ( !v11 )
          goto LABEL_18;
      }
      v12 = ptr;
      v13 = (char *)ptr + 8 * v28;
      if ( v13 == ptr )
        goto LABEL_16;
      v14 = *(_DWORD **)ptr;
      if ( v10 != **(_DWORD **)ptr )
        break;
LABEL_25:
      if ( (unsigned __int8)v26 == 127 && BYTE1(v26) == 19 )
      {
        v14[5] = 1;
        *((_BYTE *)v14 + 24) = 0;
      }
      else
      {
        sub_40B2C8(a1, v10, v26);
        v13 = (char *)ptr + 8 * v28;
      }
      memmove(v12, v12 + 1, ((v13 - (char *)v12) & 0xFFFFFFFFFFFFFFF8LL) - 8);
      if ( !--v28 )
        goto LABEL_18;
    }
    while ( ++v12 != (_QWORD *)v13 )
    {
      v14 = (_DWORD *)*v12;
      if ( *(_DWORD *)*v12 == v10 )
        goto LABEL_25;
    }
LABEL_16:
    sub_40B2C8(a1, v10, v26);
    v11 = v28;
    goto LABEL_17;
  }
LABEL_18:
  v15 = v30;
  v16 = 0;
  for ( i = 0; v16 < v31; i = v16 )
  {
    sub_4118D0(a1, v15[i], 3);
    ++v16;
    v15 = v30;
  }
  if ( v15 )
  {
    v31 = 0;
    j__free(v15);
  }
LABEL_22:
  if ( ptr )
  {
    v28 = 0;
    j__free(ptr);
  }
  return 1;
}
// 411A98: could not find valid save-restore pair for x21
// 411A98: could not find valid save-restore pair for x23
// 411A98: could not find valid save-restore pair for x24
