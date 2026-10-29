__int64 __fastcall sub_E46B20(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a2 + 168);
  if ( v2 )
  {
    (*(void (**)(void))(*(_QWORD *)v2 + 48LL))();
  }
  else
  {
    strcpy((char *)(a1 + 16), "unknown");
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 7;
  }
  return a1;
}

