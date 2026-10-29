__int64 __fastcall sub_825BB0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int16 v9; // dx

  v3 = *a2;
  if ( !*a2 )
    goto LABEL_4;
  if ( (v3 & 3) == 0 )
    return sub_70E4E0(*(_QWORD **)(a1 + 16), *a2 & 0xFFFFFFFFFFFFFFFCLL, 0);
  if ( (*a2 & 3) != 1 || (v6 = v3 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
LABEL_4:
    v4 = sub_69F410((__int64)a2);
    return sub_821BE0(*(_QWORD **)(a1 + 16), v4, 2);
  }
  v7 = sub_80F230(v6);
  v8 = *(_QWORD **)(a1 + 16);
  v9 = *(_WORD *)v7 & 0x1FF;
  if ( v9 == 72 )
    return sub_70E4E0(v8, *(_QWORD *)(v7 + 16), 1);
  if ( v9 == 47 )
    return sub_70E4E0(v8, *(_QWORD *)(v7 + 24), 1);
  return sub_821BE0(v8, *(_QWORD *)(v7 + 8), 2);
}

