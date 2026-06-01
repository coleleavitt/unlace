/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013BE0
// Address: 0x0000000100013BE0

//----- (0000000100013BE0) ----------------------------------------------------
__int64 __fastcall sub_100013BE0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v7; // [rsp+0h] [rbp-80h] BYREF
  char *v8; // [rsp+8h] [rbp-78h] BYREF
  __int128 v9; // [rsp+10h] [rbp-70h] BYREF
  __int64 v10; // [rsp+20h] [rbp-60h]
  _QWORD v11[2]; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v12[3]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+4Ch] [rbp-34h]

  v11[0] = off_1000A7DE0;
  v11[1] = v12;
  v12[0] = 0;
  v2 = sub_100010C80(a1, (__int64)v11);
  if ( ((v13 != 0) & v2) == 1 )
  {
    v9 = 0;
    v10 = 0;
    if ( (unsigned __int8)sub_100013AA0(a1, (__int64)&v9, v12[2], v13, (__int64)"load commands size", 0) )
    {
      v3 = *(_QWORD *)(a1 + 448);
      v8 = (char *)v9;
      v4 = v9 + *((_QWORD *)&v9 + 1);
      if ( (unsigned __int64)v9 < (_QWORD)v9 + *((_QWORD *)&v9 + 1) )
      {
        v5 = 0;
        if ( v3 != -1 )
          v5 = v3;
        while ( unpack_xleb128(&v7, (_QWORD *)0x40, 0, &v8, v4) )
        {
          v5 += v7;
          (**(void (__fastcall ***)(__int64, __int64))a2)(a2, v5);
          if ( (unsigned __int64)v8 >= v4 )
            goto LABEL_14;
        }
        if ( (debug[0] & 0x10) != 0 )
          sub_1000139E0(
            (int)"wrong uleb128/sleb128 encoding: %02X %02X %02X %02X %02X\n",
            (unsigned __int8)*v8,
            (unsigned __int8)v8[1],
            (unsigned __int8)v8[2],
            (unsigned __int8)v8[3],
            (unsigned __int8)v8[4]);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      }
LABEL_14:
      if ( (_QWORD)v9 )
      {
        *((_QWORD *)&v9 + 1) = 0;
        qfree((void *)v9);
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      if ( (_QWORD)v9 )
      {
        *((_QWORD *)&v9 + 1) = 0;
        qfree((void *)v9);
      }
    }
  }
  return __stack_chk_guard;
}
// 1000A7DE0: using guessed type __int64 (__fastcall *off_1000A7DE0[38])();
