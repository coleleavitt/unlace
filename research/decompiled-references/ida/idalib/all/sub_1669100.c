void __fastcall sub_1669100(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx
  const char *v6; // rax
  __int64 v7; // rdx
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD v14[39]; // [rsp+0h] [rbp-138h] BYREF

  if ( a3 )
  {
    v3 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      v3 = *(_QWORD *)v3;
      if ( (*(_BYTE *)(v3 + 8) & 0x7Fu) - 59 > 2 )
        return;
    }
    else if ( (*(_BYTE *)(v3 + 8) & 0x7Fu) - 59 > 2 )
    {
      return;
    }
    v4 = v3 - 64;
    if ( v3 != 64 )
    {
      if ( !(_BYTE)byte_2CD8C08 && __cxa_guard_acquire(&byte_2CD8C08) )
      {
        qmemcpy(v14, &off_2C8E3C0, 0x110u);
        sub_1668FC0((__int64)&unk_2CD8C10, v14, 17);
        __cxa_atexit((void (*)(void *))sub_1068DE0, &unk_2CD8C10, &off_2B25620);
        __cxa_guard_release(&byte_2CD8C08);
      }
      if ( !(_BYTE)byte_2CD8BE8 && __cxa_guard_acquire(&byte_2CD8BE8) )
      {
        v14[1] = 8;
        v14[0] = "iterator";
        v14[2] = "const_iterator";
        v14[4] = "reverse_iterator";
        v14[6] = "const_reverse_iterator";
        v14[3] = 14;
        v14[5] = 16;
        v14[7] = 22;
        sub_1668FC0((__int64)&unk_2CD8BF0, v14, 4);
        __cxa_atexit((void (*)(void *))sub_1068DE0, &unk_2CD8BF0, &off_2B25620);
        __cxa_guard_release(&byte_2CD8BE8);
      }
      if ( sub_B8EC80(v4) )
      {
        v6 = sub_995750(a2);
        if ( sub_1668F10((__int64)&unk_2CD8BF0, (__int64)v6, v7) )
        {
          v8 = sub_995750(v4);
          if ( sub_1668F10((__int64)&unk_2CD8C10, (__int64)v8, v9) )
            sub_1668340(*(_QWORD *)(a1 + 248), a3, v10, v11, v12, v13);
        }
      }
    }
  }
}
