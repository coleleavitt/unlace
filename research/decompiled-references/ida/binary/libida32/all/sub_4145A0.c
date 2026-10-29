void __fastcall sub_4145A0(__int64 a1)
{
  int v1; // esi

  v1 = *(_DWORD *)(a1 + 156);
  *(_QWORD *)a1 = &off_2AFE368;
  if ( v1 != -1 )
  {
    sub_567180(*(_QWORD *)(a1 + 144));
    register_undo_handler(*(unsigned int *)(a1 + 156), sub_416790, 0, 0);
  }
  sub_4143A0(a1);
}

