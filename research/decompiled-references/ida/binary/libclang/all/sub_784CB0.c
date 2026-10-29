__int64 __fastcall sub_784CB0(_QWORD *a1, char a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  __int64 (*v7)(void); // rax

  v2 = a1;
  v3 = (_QWORD *)(a1[10] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a1[10] & 4) != 0 )
    v3 = (_QWORD *)*v3;
  v4 = *(_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 46 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 46 > 1 )
      return 0;
    v4 = sub_B0D320(v4);
    if ( !v4 )
      return 0;
  }
  v5 = *(_QWORD *)(sub_B14A40(v4) + 120);
  if ( (v5 & 4) != 0 )
    return 0;
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v6 && a2 )
  {
    v7 = *(__int64 (**)(void))(*v6 + 32LL);
    if ( (char *)v7 == (char *)sub_777CF0 )
      v6 = (_QWORD *)v6[9];
    else
      v6 = (_QWORD *)v7();
    v2 = (_QWORD *)v2[9];
  }
  if ( v6 == v2 )
    return sub_B14A40(v4);
  else
    return 0;
}

