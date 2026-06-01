__int64 clang_enableStackTraces()
{
  signed __int32 v0; // eax
  __int64 *v1; // rcx
  volatile __int32 *v2; // rdx

  qword_4AE67B8 = 0;
  qword_4AE67B0 = nullptr;
  v0 = _InterlockedCompareExchange(&dword_4AE6810, 1, 0);
  if ( v0 )
  {
    v1 = qword_4AE6818;
    v2 = &dword_4AE6828;
    if ( (v0 == 0) != _InterlockedCompareExchange(&dword_4AE6828, 1, v0 == 0) )
    {
      v1 = (__int64 *)&algn_4AE682C[4];
      v2 = &dword_4AE6840;
      if ( _InterlockedCompareExchange(&dword_4AE6840, 1, 0) )
      {
        v1 = qword_4AE6848;
        v2 = &dword_4AE6858;
        if ( _InterlockedCompareExchange(&dword_4AE6858, 1, 0) )
        {
          v1 = qword_4AE6860;
          v2 = &dword_4AE6870;
          if ( _InterlockedCompareExchange(&dword_4AE6870, 1, 0) )
          {
            v1 = qword_4AE6878;
            v2 = &dword_4AE6888;
            if ( _InterlockedCompareExchange(&dword_4AE6888, 1, 0) )
            {
              v1 = (__int64 *)&algn_4AE688C[4];
              v2 = &dword_4AE68A0;
              if ( _InterlockedCompareExchange(&dword_4AE68A0, 1, 0) )
              {
                v1 = qword_4AE68A8;
                v2 = &dword_4AE68B8;
                if ( _InterlockedCompareExchange(&dword_4AE68B8, 1, 0) )
                  sub_25AA9C0("too many signal callbacks already registered", 1, &dword_4AE68B8, qword_4AE68A8);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v1 = qword_4AE6800;
    v2 = &dword_4AE6810;
  }
  v1[1] = 0;
  *v1 = (__int64)sub_2647D50;
  _InterlockedExchange(v2, 2);
  return sub_26447E0(0);
}

