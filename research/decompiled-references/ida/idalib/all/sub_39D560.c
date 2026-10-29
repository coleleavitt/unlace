void __fastcall __noreturn sub_39D560(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax

  if ( (unsigned __int8)sub_681B70() )
  {
    if ( !under_debugger )
      interr(1390);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 152) )
    {
      sub_39C810(a1);
      sub_51EB30(a1, 1);
      *(_QWORD *)(a1 + 1072) = 0;
      *(_QWORD *)(a1 + 1480) = 0;
      memset(
        (void *)((a1 + 1080) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)a1 - (((_DWORD)a1 + 1080) & 0xFFFFFFF8) + 1488) >> 3));
      if ( *(_BYTE *)(a1 + 328) )
      {
        if ( a3 == 3 )
        {
          *(_QWORD *)(a1 + 640) = *(_QWORD *)(a1 + 336);
          *(_QWORD *)(a1 + 916) = *(_QWORD *)(a1 + 612);
          qmemcpy(
            (void *)((a1 + 648) & 0xFFFFFFFFFFFFFFF8LL),
            (const void *)(336 - (640 - ((a1 + 648) & 0xFFFFFFFFFFFFFFF8LL))),
            8LL * (((_DWORD)a1 + 640 - (((_DWORD)a1 + 648) & 0xFFFFFFF8) + 284) >> 3));
          v4 = sub_5FF0F0();
          sub_603BA0(*(_QWORD *)(a1 + 1672) + 40LL, v4);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 336) = *(_QWORD *)(a1 + 640);
        *(_QWORD *)(a1 + 612) = *(_QWORD *)(a1 + 916);
        qmemcpy(
          (void *)((a1 + 344) & 0xFFFFFFFFFFFFFFF8LL),
          (const void *)(640 - (336 - ((a1 + 344) & 0xFFFFFFFFFFFFFFF8LL))),
          8LL * (((_DWORD)a1 + 336 - (((_DWORD)a1 + 344) & 0xFFFFFFF8) + 284) >> 3));
        *(_BYTE *)(a1 + 328) = 1;
      }
      sub_39CB10(a1, a2);
    }
    if ( !under_debugger )
      interr(1391);
  }
  BUG();
}
