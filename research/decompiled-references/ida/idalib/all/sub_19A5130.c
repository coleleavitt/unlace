__int64 __fastcall sub_19A5130(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  int v7; // ebp
  int v8; // eax
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v17; // rax
  char v18; // dl
  _QWORD v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v19[0] = 0;
  if ( !a5 )
  {
    v17 = sub_1CE0410(
            a1,
            *(_QWORD *)(a1 + 608),
            a2,
            a3,
            *(_DWORD *)a6,
            *(_QWORD *)(a6 + 24),
            *(_QWORD *)(a6 + 8),
            *(_DWORD *)(a6 + 4),
            *(_DWORD *)(a6 + 36),
            (unsigned __int8)a6 + 56,
            *(_DWORD *)(a6 + 44),
            *(_DWORD *)(a6 + 40));
    if ( !v18 && (sub_1E5F010(v17, v19) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_3;
    return 0;
  }
  v6 = a4;
  v7 = a5;
  v8 = sub_15AB9E0(a3, *(_QWORD **)(a1 + 248), a3, a4, a5, a6);
  if ( (sub_1CD6010(a1, 5, a2, v8, v9, v7, v6, (__int64)v19, 0) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
LABEL_3:
  v12 = *(_QWORD **)(a1 + 248);
  v13 = v19[0];
  v14 = v12[294];
  v12[304] += 24LL;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v12[295] >= (unsigned __int64)(v15 + 24) && v14 )
    v12[294] = v15 + 24;
  else
    v15 = sub_986170((__int64)(v12 + 294), 24, 24, 3, v10, v11);
  sub_A556A0(v15, v13);
  return v15;
}
