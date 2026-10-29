__int64 __fastcall sub_A238C0(__int64 *a1, unsigned int *a2, int **a3)
{
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // r13
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // r11d
  int v10; // ecx
  int *v11; // rdx
  unsigned int i; // r10d
  int *v13; // r9
  int v14; // r8d
  unsigned int v15; // r10d
  char v16; // al
  int *v17; // r9
  char v18; // al
  int *v19; // r9
  int *v20; // [rsp+0h] [rbp-A8h]
  int *v21; // [rsp+0h] [rbp-A8h]
  int *v22; // [rsp+0h] [rbp-A8h]
  int v23; // [rsp+8h] [rbp-A0h]
  int v24; // [rsp+8h] [rbp-A0h]
  int v25; // [rsp+8h] [rbp-A0h]
  int v26; // [rsp+Ch] [rbp-9Ch]
  int v27; // [rsp+10h] [rbp-98h] BYREF
  __int64 *v28; // [rsp+18h] [rbp-90h]
  __int64 v29; // [rsp+20h] [rbp-88h]
  __int64 v30; // [rsp+28h] [rbp-80h] BYREF
  int v31; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v32; // [rsp+48h] [rbp-60h]
  __int64 v33; // [rsp+50h] [rbp-58h]
  __int64 v34; // [rsp+58h] [rbp-50h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = nullptr;
    return 0;
  }
  v5 = *a1;
  v28 = &v30;
  v7 = v3 - 1;
  v32 = &v34;
  v27 = -1;
  v29 = 0x200000000LL;
  v31 = -2;
  v33 = 0x200000000LL;
  v8 = sub_A233D0(a2);
  v9 = *a2;
  v10 = 1;
  v11 = nullptr;
  for ( i = v7 & v8; ; i = v7 & v15 )
  {
    v13 = (int *)(v5 + 48LL * i);
    v14 = *v13;
    if ( *v13 == v9 )
    {
      v26 = *v13;
      v23 = v10;
      v20 = v11;
      result = sub_A1EC00((__int64)a2, v5 + 48LL * i);
      v11 = v20;
      v10 = v23;
      v14 = v26;
      if ( (_BYTE)result )
      {
        *a3 = v13;
        return result;
      }
    }
    if ( v14 == -1 )
      break;
    if ( v14 == -2 )
    {
      v25 = v10;
      v22 = v11;
      v18 = sub_A1EC00((__int64)v13, (__int64)&v31);
      v11 = v22;
      v10 = v25;
      if ( !v22 )
      {
        if ( v18 )
          v11 = v19;
      }
    }
LABEL_7:
    v15 = v10 + i;
    ++v10;
  }
  v24 = v10;
  v21 = v11;
  v16 = sub_A1EC00((__int64)v13, (__int64)&v27);
  v11 = v21;
  v10 = v24;
  if ( !v16 )
    goto LABEL_7;
  if ( !v21 )
    v11 = v17;
  *a3 = v11;
  return 0;
}
