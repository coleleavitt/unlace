void __fastcall __noreturn init_database(int a1, __int64 a2)
{
  __int64 v3; // r13
  int v4; // eax
  _QWORD *v5; // rbx
  __int64 v6; // r15
  _BYTE *v7; // rsi
  _BYTE v8[16]; // [rsp+0h] [rbp-168h] BYREF
  unsigned __int64 v9; // [rsp+128h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  if ( batch[0] )
    *(_BYTE *)(sub_5FF0F0() + 569) = 0;
  v3 = qword_2CCB4C0;
  qmutex_lock(qword_2CCB4C0);
  if ( !byte_2CCB4C8 )
  {
    byte_2CCB4C8 = 1;
    v4 = sub_5FF0F0();
    sub_6008E0(v4);
    if ( a1 > 1 )
    {
      v5 = (_QWORD *)(a2 + 8);
      v6 = a2 + 8LL * (unsigned int)(a1 - 2) + 16;
      while ( 1 )
      {
        v7 = (_BYTE *)*v5;
        if ( *(_BYTE *)*v5 != 45 )
          break;
        if ( v7[1] == 100 )
        {
          sub_6003A0(0, v7 + 2, 2);
          if ( ++v5 == (_QWORD *)v6 )
            break;
        }
        else if ( ++v5 == (_QWORD *)v6 )
        {
          break;
        }
      }
    }
  }
  qmutex_unlock(v3);
  if ( (unsigned __int8)netnode_inited() )
  {
    if ( (get_merge_state() & 3) != 0 )
    {
      sub_3FAEC0();
      sub_389040((__int64)v8, a1, a2);
    }
  }
  sub_389040((__int64)v8, a1, a2);
}
