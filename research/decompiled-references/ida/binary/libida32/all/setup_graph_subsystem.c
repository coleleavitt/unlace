__int64 __fastcall setup_graph_subsystem(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp

  result = **(_QWORD **)(qword_2CA1698 + 1480);
  v3 = *(_QWORD *)(result + 1432);
  if ( a1 )
    result = qstrncpy(v3 + 8, a1, 1024);
  if ( a2 )
    *(_QWORD *)(v3 + 1032) = a2;
  return result;
}

