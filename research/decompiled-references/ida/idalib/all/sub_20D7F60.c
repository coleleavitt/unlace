__int64 __fastcall sub_20D7F60(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  size_t v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // r12
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  size_t v13; // rax
  __int64 result; // rax
  __int64 v15; // rdx
  _BYTE *v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-30h] BYREF
  _OWORD v18[2]; // [rsp+10h] [rbp-28h] BYREF

  ++*(_DWORD *)(a2 + 40);
  v17 = a1;
  v18[0] = _mm_loadh_ps((const double *)&v17);
  sub_20CFD70(a2);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v3 + 1;
  *(_BYTE *)(v4 + v3) = 40;
  if ( *(_BYTE *)(a1 + 48) )
  {
    v16 = *(_BYTE **)(a1 + 24);
    if ( !v16 )
      goto LABEL_4;
    sub_20D5A60(v16, a2, 3u, 1u);
  }
  else
  {
    sub_20D7DD0((__int64 *)v18);
  }
  v5 = j__strlen(" ");
  v6 = sub_20D1ED0((_QWORD *)a2, v5, " ");
  v7 = sub_20D1ED0(v6, *(_QWORD *)(a1 + 32), *(const void **)(a1 + 40));
  v8 = j__strlen(" ");
  sub_20D1ED0(v7, v8, " ");
LABEL_4:
  v9 = j__strlen("...");
  sub_20D1ED0((_QWORD *)a2, v9, "...");
  if ( *(_BYTE *)(a1 + 48) || *(_QWORD *)(a1 + 24) )
  {
    v10 = j__strlen(" ");
    v11 = sub_20D1ED0((_QWORD *)a2, v10, " ");
    v12 = sub_20D1ED0(v11, *(_QWORD *)(a1 + 32), *(const void **)(a1 + 40));
    v13 = j__strlen(" ");
    sub_20D1ED0(v12, v13, " ");
    if ( *(_BYTE *)(a1 + 48) )
      sub_20D7DD0((__int64 *)v18);
    else
      sub_20D5A60(*(_BYTE **)(a1 + 24), a2, 3u, 1u);
  }
  --*(_DWORD *)(a2 + 40);
  sub_20CFD70(a2);
  result = *(_QWORD *)(a2 + 16);
  v15 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = result + 1;
  *(_BYTE *)(v15 + result) = 41;
  return result;
}
