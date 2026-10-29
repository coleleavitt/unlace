unsigned __int64 __fastcall sub_7D8960(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // edx
  __int64 v17; // rbp
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // dl
  unsigned __int64 v22; // [rsp+8h] [rbp-30h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v4 = *(_QWORD *)(sub_798D40(a1) + 18200);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 80LL))(v4, *(_QWORD *)(a1 + 72), 1);
  v5 = *(_QWORD *)(a1 + 80);
  if ( !v5 )
    v5 = sub_7D0C20(a1);
  v6 = *(__int64 **)(v5 + 120);
  v7 = &v6[*(unsigned int *)(v5 + 128)];
  if ( v7 == v6 )
    return 0;
  while ( 1 )
  {
    v8 = *v6;
    v9 = *(_QWORD *)(*(_QWORD *)(*v6 + 80) + 152LL) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v3 == (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 32LL))(v9) )
      break;
    if ( v7 == ++v6 )
      return 0;
  }
  v10 = *(_QWORD *)(v8 + 80);
  v11 = *(_QWORD *)(v10 + 72);
  v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v11 & 1) != 0 )
    goto LABEL_10;
  if ( v12 <= 3 )
    return 0;
  result = v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v12 & 2) != 0 )
  {
    v17 = *(_QWORD *)(result + 18200);
    if ( v17 )
    {
      v18 = *(_QWORD *)(result + 2192);
      *(_QWORD *)(result + 2272) += 24LL;
      v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(result + 2200) >= v19 + 24 && v18 )
        *(_QWORD *)(result + 2192) = v19 + 24;
      else
        v19 = sub_7CF9B0(result + 2192, 24, 3);
      *(_QWORD *)v19 = v17;
      *(_DWORD *)(v19 + 8) = 0;
      v20 = v19 | 5;
      v21 = v19 & 0xFE;
      *(_QWORD *)(v19 + 16) = v10;
      v14 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      LOBYTE(v12) = v21 | 4;
      *(_QWORD *)(v10 + 72) = v20;
      result = v14;
LABEL_11:
      if ( (v12 & 4) != 0 && v14 )
      {
        v15 = *(_QWORD *)result;
        v16 = *(_DWORD *)(*(_QWORD *)result + 12LL);
        if ( *(_DWORD *)(result + 8) != v16 )
        {
          *(_DWORD *)(result + 8) = v16;
          v22 = result;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 144LL))(v15, v10);
          result = v22;
        }
        return *(_QWORD *)(result + 16);
      }
      return result;
    }
    v12 = v10 & 0xFFFFFFFFFFFFFFFALL;
    v11 = v10 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v10 + 72) = v11;
LABEL_10:
    result = v11 & 0xFFFFFFFFFFFFFFF8LL;
    v14 = result;
    if ( !v12 )
      return result;
    goto LABEL_11;
  }
  return result;
}

