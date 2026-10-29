__int64 __fastcall sub_F84DC0(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // zf
  __int64 v5; // r9
  __int64 *v6; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v16; // [rsp+8h] [rbp-30h] BYREF
  __int64 v17; // [rsp+10h] [rbp-28h] BYREF
  __int64 v18; // [rsp+18h] [rbp-20h]

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v17 = a2;
  v18 = a3;
  v4 = (unsigned __int8)sub_F7F110((__int64 *)(a1 + 96), &v17, &v15) == 0;
  v6 = v15;
  if ( !v4 )
    return v15[2];
  v8 = *(_DWORD *)(a1 + 104);
  v16 = v15;
  v9 = (unsigned int)(v8 + 1);
  v10 = *(unsigned int *)(a1 + 112);
  v11 = (unsigned int)(4 * v9);
  v12 = 2 * v10;
  if ( (unsigned int)v11 < 3 * (int)v10 )
  {
    if ( (int)v10 - *(_DWORD *)(a1 + 108) - (int)v9 > (unsigned int)v10 >> 3 )
      goto LABEL_5;
    v12 = *(_DWORD *)(a1 + 112);
  }
  sub_F84BB0(a1 + 96, v12, v9, v10, v11, v5);
  sub_F7F110((__int64 *)(a1 + 96), &v17, &v16);
  LODWORD(v9) = *(_DWORD *)(a1 + 104) + 1;
  v6 = v16;
LABEL_5:
  v4 = *v6 == -4096;
  *(_DWORD *)(a1 + 104) = v9;
  if ( !v4 || v6[1] != 0x7FFFFFFFFFFFFFFFLL )
    --*(_DWORD *)(a1 + 108);
  v13 = v18;
  v14 = v17;
  v6[2] = 0;
  *v6 = v14;
  v6[1] = v13;
  return 0;
}
