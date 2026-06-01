__int64 __fastcall sub_3E91B0(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  _BYTE *v4; // r15
  unsigned int v5; // ebx
  int v6; // eax
  int v8; // eax
  _DWORD *v9; // rdi
  int v10; // eax
  int v11; // r12d
  int v12; // edx
  __int64 v13; // rbp
  int v14; // eax
  bool v15; // zf
  _DWORD *v16; // rsi
  unsigned __int8 v17; // al
  __int64 v18; // r12
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  char *v22; // rax
  __int64 v23; // rsi
  char *v24; // r12
  char *v25; // [rsp+0h] [rbp-C8h]
  char v26; // [rsp+17h] [rbp-B1h] BYREF
  __int64 v27; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+20h] [rbp-A8h] BYREF
  int v29; // [rsp+28h] [rbp-A0h]
  _QWORD v30[5]; // [rsp+30h] [rbp-98h] BYREF
  char v31; // [rsp+58h] [rbp-70h]
  __int64 v32; // [rsp+60h] [rbp-68h]
  unsigned int v33; // [rsp+68h] [rbp-60h]
  _DWORD v34[3]; // [rsp+7Ch] [rbp-4Ch] BYREF
  unsigned __int64 v35; // [rsp+88h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v35 = __readfsqword(0x28u);
  v4 = a3;
  v31 = 0;
  memset(&v30[1], 0, 32);
  v30[0] = off_4E89F8;
  v32 = v3;
  v33 = 0;
  sub_11C4C0(a3, (__int64)v30);
  v5 = v33;
  if ( v33 )
    return v5;
  v6 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == 42 )
  {
    if ( v4[32] != 4 )
      goto LABEL_4;
    v4 = (_BYTE *)*((_QWORD *)v4 + 5);
    v6 = *(_DWORD *)v4;
  }
  if ( v6 == 6 && v4[32] == 4 )
    v4 = (_BYTE *)*((_QWORD *)v4 + 5);
LABEL_4:
  if ( !(unsigned __int8)sub_11D940(v4 + 48, &v27, 0) )
    return v5;
  v8 = *(_DWORD *)v4;
  if ( v27 )
  {
    if ( (unsigned int)(v8 - 43) <= 1 && (v27 == 1 || v27 == 64) )
    {
      v15 = v4[32] == 4;
      v26 = 0;
      if ( v15 )
      {
        v16 = (_DWORD *)*((_QWORD *)v4 + 5);
        if ( *v16 == 20 )
        {
          if ( v16 )
          {
            v17 = sub_3E8F40(*(_QWORD *)(a1 + 8), (__int64)v16, &v26);
            if ( (v17 & 0xBA) == 0 && v17 == (v27 | 4) && v26 )
            {
              v18 = *((_QWORD *)v4 + 5);
              v19 = *(_QWORD *)(a1 + 8);
              if ( v27 == 1 )
                v20 = *(_DWORD *)(v19 + 688);
              else
                v20 = *(_DWORD *)(v19 + 696);
              v29 = v20;
              v28 = 0x100000001LL;
              sub_122C80(v18 + 32, (unsigned __int8 *)&v28);
              sub_11A960((__int64)&v28);
              v21 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 692LL);
              v28 = 0x100000001LL;
              v29 = v21;
              sub_122C80(v18 + 48, (unsigned __int8 *)&v28);
              sub_11A960((__int64)&v28);
              sub_11E3A0((char *)(v18 + 48), *(_QWORD *)(a1 + 8), 6, *(_QWORD *)(v18 + 24), *(_DWORD *)(v18 + 52));
              *(_OWORD *)(*((_QWORD *)v4 + 7) + 16LL) = 0;
              return 1;
            }
          }
        }
      }
    }
  }
  else
  {
    if ( v8 == 31 )
    {
      if ( (v4[4] & 0x10) != 0 )
        return v5;
      goto LABEL_10;
    }
    if ( (unsigned int)(v8 - 43) <= 1 || (unsigned int)(v8 - 32) <= 1 )
    {
LABEL_10:
      v9 = *(_DWORD **)(a1 + 8);
      v34[0] = 0;
      v10 = sub_3E8FE0(v9, (__int64)(v4 + 32), v34);
      v11 = v10;
      if ( !v10 )
        return 0;
      v12 = v34[0];
      if ( v10 == 1 )
      {
        v29 = v34[0];
        v28 = 0x100000001LL;
        sub_122C80((__int64)(v4 + 32), (unsigned __int8 *)&v28);
        sub_11A960((__int64)&v28);
      }
      else
      {
        v13 = *((_QWORD *)v4 + 5);
        v14 = 19;
        if ( *(_DWORD *)v13 == 31 )
        {
          if ( v11 == 3 )
            return v5;
          v14 = 21;
        }
        *(_DWORD *)v13 = v14;
        v28 = 0x100000001LL;
        v29 = v12;
        sub_122C80(v13 + 32, (unsigned __int8 *)&v28);
        sub_11A960((__int64)&v28);
        v28 = 0x100000001LL;
        v29 = v34[1];
        sub_122C80(v13 + 48, (unsigned __int8 *)&v28);
        sub_11A960((__int64)&v28);
        if ( v11 == 3 )
        {
          v22 = (char *)j__qalloc_or_throw();
          v23 = *(_QWORD *)(v13 + 24);
          v24 = v22;
          v25 = v22 + 32;
          *((_QWORD *)v22 + 4) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v22 + 5) = 0;
          *((_QWORD *)v22 + 6) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v22 + 7) = 0;
          *((_QWORD *)v22 + 8) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v22 + 9) = 0;
          sub_32D4D0(v22, v23);
          *(_DWORD *)v24 = 19;
          sub_11A5D0(v25, (char *)(v13 + 32));
          sub_11A5D0(v24 + 48, (char *)(v13 + 48));
          *((_DWORD *)v24 + 17) = 1;
          *(_DWORD *)(v13 + 36) = 1;
          *(_BYTE *)(v13 + 32) = 4;
          *(_QWORD *)(v13 + 40) = v24;
          v28 = 0x100000001LL;
          v29 = v34[2];
          sub_122C80(v13 + 48, (unsigned __int8 *)&v28);
          sub_11A960((__int64)&v28);
        }
      }
      if ( *(_DWORD *)v4 == 31 )
        *(_DWORD *)v4 = 33;
      return 1;
    }
  }
  return v5;
}
