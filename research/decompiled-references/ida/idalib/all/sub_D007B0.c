__int64 __fastcall sub_D007B0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  if ( *(char *)(sub_E32240(a1 + 384) + 1) >= 0 )
  {
    v4[0] = sub_E1EEA0(*(_QWORD *)(a1 + 784), v3);
    sub_E33D20(a1 + 384, v4, 2480, 0);
  }
  return 1;
}
