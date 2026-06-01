bool sub_11E80()
{
  if ( qword_1D3E0 )
    return sub_11D10(qword_1D3E0);
  qword_1D3E0 = j__pthread_self();
  qword_1D3E8 = (__int64)sub_11DE0();
  return sub_11D10(qword_1D3E0);
}

