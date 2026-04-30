void __fastcall sub_1C53D0(int a1, void *a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      sub_2346D0();
      sub_533E40(1);
      v2 = sub_277DF0();
      if ( v2 )
      {
        *(_QWORD *)(v2 + 112) = 0;
        *(_QWORD *)(v2 + 120) = -1;
        *(_DWORD *)(v2 + 128) = 0;
      }
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
