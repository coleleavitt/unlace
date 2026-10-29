__int64 __fastcall sub_663410(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1480);
  if ( *(_DWORD *)(result + 1552) != -1 )
  {
    sub_396090(1u);
    sub_4F8110(*(__int64 **)(a1 + 1480));
    sub_39CE80(a1);
    sub_440060(a1);
    sub_3C28A0(*(_QWORD *)(a1 + 1480));
    sub_528240(a1);
    sub_5AF180(a1, (unsigned int *)((char *)&dword_0 + 1));
    sub_5030A0(a1);
    sub_4F7540(a1);
    sub_4ED600((unsigned int *)(*(_QWORD *)(a1 + 1480) + 1552LL));
    sub_5ECFA0(a1);
    sub_514E80(a1);
    return sub_671620(a1);
  }
  return result;
}

