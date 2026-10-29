__int64 __fastcall sub_2147B80(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebp
  __int64 v4; // rdi
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  const char *v6; // [rsp+10h] [rbp-48h] BYREF
  __int16 v7; // [rsp+30h] [rbp-28h]

  v1 = sub_2153CB0(*(_QWORD *)(a1 + 8), &v5);
  if ( (_BYTE)v1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v6 = "expected identifier in directive";
    v7 = 259;
    return (unsigned int)sub_21543E0(v4, &v6, 0, 0);
  }
  else
  {
    v2 = v1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 312LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      v5);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
    return v2;
  }
}
