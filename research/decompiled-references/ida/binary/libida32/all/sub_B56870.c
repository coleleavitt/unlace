__int64 __fastcall sub_B56870(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r12
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rdx
  __int64 (__fastcall *v10)(__int64); // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax

  v5 = a1;
  v6 = (_QWORD *)(a1[10] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a1[10] & 4) != 0 )
    v6 = (_QWORD *)*v6;
  v7 = *(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 47 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 > 1 )
      return 0;
    v7 = sub_F3F310(*(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFF0LL), a2, v6, a4);
    if ( !v7 )
      return 0;
  }
  v8 = *(_QWORD *)(sub_F3D1D0(v7, a2, v6, a4, a5) + 120);
  if ( (v8 & 4) != 0 )
    return 0;
  v12 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v12 && (_BYTE)a2 )
  {
    v10 = sub_B4CB90;
    v9 = *(__int64 (__fastcall **)(__int64))(*v12 + 32LL);
    if ( v9 == sub_B4CB90 )
      v12 = (_QWORD *)v12[9];
    else
      v12 = (_QWORD *)v9((__int64)v12);
    v5 = (_QWORD *)a1[9];
  }
  if ( v12 == v5 )
    return sub_F3D1D0(v7, a2, v9, v10, v11);
  else
    return 0;
}

