char __fastcall sub_F7BEA0(__int64 a1, __int64 a2, char a3)
{
  _OWORD *v4; // r12
  __int64 v5; // rcx
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  char result; // al
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v4 = (_OWORD *)(a1 + 8);
  if ( !*(_QWORD *)(a1 + 24) && sub_F7BE60((_QWORD *)(a1 + 32)) && !*(_QWORD *)(a1 + 40) )
  {
    if ( !*(_QWORD *)a1 )
    {
      result = sub_F7BE70(v4);
      if ( result )
        return result;
    }
    if ( a3 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( !a3 )
    sub_995540(a2, "\n       ");
  v6 = sub_995540(a2, "[return adjustment (to type '");
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 25;
  if ( (unsigned int)v8 > 1 )
    v7 = sub_F63050(v7, "[return adjustment (to type '", v8, v5);
  v9 = sub_F76CF0(
         v6,
         *(_QWORD *)&byte_8[*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL]
        | (unsigned __int8)*(_QWORD *)(v7 + 24))
       & 7);
  sub_995540(v9, "'): ");
  if ( *(_DWORD *)(a1 + 32) )
  {
    v15 = sub_995540(a2, "vbptr at offset ");
    v16 = sub_227B910(v15, *(unsigned int *)(a1 + 32));
    sub_995540(v16, ", ");
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    v13 = sub_995540(a2, "vbase #");
    v14 = sub_227B910(v13, *(unsigned int *)(a1 + 36));
    sub_995540(v14, ", ");
  }
  v10 = sub_227B930(a2, *(_QWORD *)(a1 + 24));
  sub_995540(v10, " non-virtual]");
  if ( *(_QWORD *)a1 || (result = sub_F7BE70(v4)) == 0 )
  {
LABEL_17:
    sub_995540(a2, "\n       ");
LABEL_18:
    sub_995540(a2, "[this adjustment: ");
    if ( !sub_F7BE70(v4) )
    {
      v17 = sub_995540(a2, "vtordisp at ");
      v18 = sub_227B930(v17, *(int *)(a1 + 8));
      sub_995540(v18, ", ");
      if ( *(_DWORD *)(a1 + 12) )
      {
        v19 = sub_995540(a2, "vbptr at ");
        v20 = sub_227B930(v19, *(int *)(a1 + 12));
        sub_995540(v20, " to the left,");
        v21 = sub_995540(a2, "\n       ");
        v22 = sub_995540(v21, " vboffset at ");
        v23 = sub_227B930(v22, *(int *)(a1 + 16));
        sub_995540(v23, " in the vbtable, ");
      }
    }
    v12 = sub_227B930(a2, *(_QWORD *)a1);
    return sub_995540(v12, " non-virtual]");
  }
  return result;
}
