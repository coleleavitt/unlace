char __fastcall sub_F58160(__int64 a1, __int64 a2, char a3)
{
  _OWORD *v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  char result; // al
  __int64 v10; // rax
  __int64 v11; // rax
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

  v4 = (_OWORD *)(a1 + 8);
  if ( !*(_QWORD *)(a1 + 24) && sub_F58120((_QWORD *)(a1 + 32)) && !*(_QWORD *)(a1 + 40) )
  {
    if ( !*(_QWORD *)a1 )
    {
      result = sub_F58130(v4);
      if ( result )
        return result;
    }
    if ( a3 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( !a3 )
    sub_971800(a2, "\n       ");
  v5 = sub_971800(a2, "[return adjustment (to type '");
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 25 > 1 )
    v6 = sub_F3F310(v6);
  v7 = sub_F52FB0(
         v5,
         *(_QWORD *)&byte_8[*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL]
        | (unsigned __int8)*(_QWORD *)(v6 + 24))
       & 7);
  sub_971800(v7, "'): ");
  if ( *(_DWORD *)(a1 + 32) )
  {
    v13 = sub_971800(a2, "vbptr at offset ");
    v14 = sub_2257BD0(v13, *(unsigned int *)(a1 + 32));
    sub_971800(v14, ", ");
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    v11 = sub_971800(a2, "vbase #");
    v12 = sub_2257BD0(v11, *(unsigned int *)(a1 + 36));
    sub_971800(v12, ", ");
  }
  v8 = sub_2257BF0(a2, *(_QWORD *)(a1 + 24));
  sub_971800(v8, " non-virtual]");
  if ( *(_QWORD *)a1 || (result = sub_F58130(v4)) == 0 )
  {
LABEL_17:
    sub_971800(a2, "\n       ");
LABEL_18:
    sub_971800(a2, "[this adjustment: ");
    if ( !sub_F58130(v4) )
    {
      v15 = sub_971800(a2, "vtordisp at ");
      v16 = sub_2257BF0(v15, *(int *)(a1 + 8));
      sub_971800(v16, ", ");
      if ( *(_DWORD *)(a1 + 12) )
      {
        v17 = sub_971800(a2, "vbptr at ");
        v18 = sub_2257BF0(v17, *(int *)(a1 + 12));
        sub_971800(v18, " to the left,");
        v19 = sub_971800(a2, "\n       ");
        v20 = sub_971800(v19, " vboffset at ");
        v21 = sub_2257BF0(v20, *(int *)(a1 + 16));
        sub_971800(v21, " in the vbtable, ");
      }
    }
    v10 = sub_2257BF0(a2, *(_QWORD *)a1);
    return sub_971800(v10, " non-virtual]");
  }
  return result;
}

