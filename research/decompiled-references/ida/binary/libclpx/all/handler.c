void handler()
{
  if ( qword_4D6DA0 )
  {
    ClpModel::setMaximumIterations(qword_4D6DA0, 0);
    if ( qword_4D6DA8 )
      *(_DWORD *)(qword_4D6DA8 + 1304) = 0;
  }
  else if ( qword_4D6DA8 )
  {
    *(_DWORD *)(qword_4D6DA8 + 1304) = 0;
  }
}

