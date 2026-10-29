__int64 __fastcall sub_4E0BE0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1728LL);
  sub_4E07C0(v2);
  if ( !*(_BYTE *)(v2 + 640) )
    sub_4DE240(v2);
  if ( a2 >= (__int64)(*(_QWORD *)(v2 + 624) - *(_QWORD *)(v2 + 616)) >> 2 )
    return 0;
  sub_4DEC70(v2);
  v3 = *(_QWORD *)(v2 + 408);
  v4 = *(_QWORD *)(v3
                 + 8LL
                 * *(unsigned int *)(*(_QWORD *)(v2 + 440) + 4LL * *(unsigned int *)(*(_QWORD *)(v2 + 616) + 4 * a2)));
  if ( *(_QWORD *)(v3
                 + 8LL
                 * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v2 + 440)
                                            + 4LL * *(unsigned int *)(*(_QWORD *)(v2 + 616) + 4 * a2))
                                + 1))
     - v4 == 1 )
    return 0;
  else
    return *(_QWORD *)(v2 + 360) + v4;
}
