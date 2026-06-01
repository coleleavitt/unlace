__int64 __fastcall sub_8CBF60(__int64 a1, __int64 a2, void *a3)
{
  if ( (unsigned int)qstat((char *)a3) )
    return sub_8D9800(-1, a3);
  else
    return 0;
}

