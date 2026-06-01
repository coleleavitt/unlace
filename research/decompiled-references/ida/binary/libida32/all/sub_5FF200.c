__int64 __fastcall sub_5FF200(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebp
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v5; // [rsp+8h] [rbp-70h]
  _QWORD v6[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v7; // [rsp+30h] [rbp-48h]
  void *v8; // [rsp+40h] [rbp-38h]
  __int16 v9; // [rsp+48h] [rbp-30h]
  char v10; // [rsp+4Ah] [rbp-2Eh]
  unsigned __int64 v11; // [rsp+58h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v9 = 256;
  v8 = nullptr;
  v10 = 0;
  v7 = 0;
  v6[0] = qbasename(a1);
  v6[1] = "flirt";
  *(_QWORD *)&v7 = 0;
  v1 = idt_open(v6, sub_5FF100);
  v2 = -v1;
  if ( v1 > 1 )
  {
    ptr = nullptr;
    v5 = 0;
    idt_format_error(&ptr, a1, v1);
    sub_375400();
  }
  qfree(v8);
  return v2;
}

