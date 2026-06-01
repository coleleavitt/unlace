__int64 __fastcall sub_3B8AB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int *range; // rax
  unsigned int v4; // r12d
  __int64 result; // rax
  __int64 v6; // r13

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1480LL);
  range = (unsigned int *)rangeset_t_find_range(v2 + 1112, a2);
  if ( !range )
  {
    v6 = *(_QWORD *)(v2 + 1008);
    v4 = -1;
    if ( !sub_8954D0(v6, (unsigned int)a2) )
      goto LABEL_3;
    range = *(unsigned int **)(v6 + 48);
  }
  v4 = *range;
LABEL_3:
  if ( (unsigned __int8)sub_3E9640(a1)
    && ((LODWORD(result) = sub_3E9FB0(a1, (unsigned int)a2), v4 < (unsigned int)result && (_DWORD)result != -1)
     || v4 == -1) )
  {
    return (unsigned int)result;
  }
  else
  {
    return v4;
  }
}

