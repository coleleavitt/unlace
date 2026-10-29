void __fastcall sub_C06BF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // ax
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // r13
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+18h] [rbp-240h]
  char *s; // [rsp+60h] [rbp-1F8h] BYREF
  void *ptr; // [rsp+100h] [rbp-158h]
  __int128 v19; // [rsp+108h] [rbp-150h]

  if ( a4 && ((v5 = *(_WORD *)a4 & 0x1FF, v5 == 111) || v5 == 112) )
  {
    v6 = *(_DWORD *)(a4 + 4);
    v16 = *(_QWORD *)(a4 + 24);
    v7 = v16;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16);
    v16 = *(_QWORD *)(a2 + 24);
    v7 = v16;
  }
  if ( (*(_BYTE *)(v7 + 8) & 0x7Fu) - 35 <= 3 )
  {
    v8 = v7 - 72;
    v9 = v8;
    if ( v8 )
    {
      if ( !sub_B77450(v8) )
      {
        v12 = *(_QWORD *)(sub_B8C1B0(v16) + 16);
        v13 = (v12 & 4) != 0 ? *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL) : v12 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v13 )
        {
          if ( v13 != 64 )
          {
            v14 = *(_QWORD *)(v13 + 64);
            if ( v14 )
            {
              if ( (*(_BYTE *)(v14 + 10) & 0x20) != 0 && (unsigned int)sub_B77890(v9) == 42 )
              {
                v15 = sub_B72690(v16);
                if ( v15 )
                  v15 -= 64LL;
                sub_B72690(v15 + 64);
              }
            }
          }
        }
      }
    }
  }
  v10 = *(_QWORD *)(a3 + 2312);
  ptr = (void *)sub_101FD20(v10, v6);
  LODWORD(v19) = v11;
  sub_1022900(&s, v10, (unsigned __int64)ptr >> 32, 1);
  __asm { jmp     rax }
}
