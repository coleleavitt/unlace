__int64 __fastcall sub_754280(__int64 a1)
{
  __int64 v1; // rdx

  if ( a1 && (v1 = *(_QWORD *)(a1 + 320)) != 0 )
    return *(_QWORD *)(v1 + 120) + *(_QWORD *)(v1 + 304);
  else
    return 0;
}
