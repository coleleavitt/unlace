__int64 __fastcall sub_4344A0(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rbp
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  volatile signed __int32 *v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1672LL) + 609LL) )
    return v10 - __readfsqword(0x28u);
  sub_433E40();
  register_undo_handler(219, sub_43FBF0, 0, 1);
  sub_982660(&v8);
  v2 = v9;
  v3 = v8;
  if ( v9 )
  {
    v4 = v9 + 2;
    if ( *((_QWORD *)v9 + 1) == 0x100000001LL )
    {
      v6 = *(_QWORD *)v9;
      v7 = v9;
      *((_QWORD *)v9 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64 (__fastcall *)(int, int, int, int, int, int, int, char, int, void *, __int64, int, __int64), volatile signed __int32 *))(v6 + 16))(
        v7,
        sub_43FBF0,
        v4);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 24LL))(v2);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v5 = _InterlockedExchangeAdd(v4, 0xFFFFFFFF);
      }
      else
      {
        v5 = *((_DWORD *)v9 + 2);
        *((_DWORD *)v9 + 2) = v5 - 1;
      }
      if ( v5 == 1 )
        sub_434350(v2);
    }
  }
  if ( v3 )
    return v10 - __readfsqword(0x28u);
  else
    return sub_983DB0(0);
}
