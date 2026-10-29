__int64 __fastcall sub_3E8BE0(__int64 a1, int a2)
{
  _QWORD *v2; // rdx

  if ( a2 <= 0 )
    return 0;
  v2 = *(_QWORD **)(*(_QWORD *)a1 + 1552LL);
  if ( (unsigned __int64)a2 >= v2[1] )
    return 0;
  else
    return *(_QWORD *)(*v2 + 48LL * a2);
}
