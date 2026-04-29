__int64 __fastcall sub_13B20(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r12
  unsigned int v7; // ebp
  const char *v9; // rsi
  const char *v10; // [rsp+0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+8h] [rbp-80h]
  _BYTE v12[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h]
  __int128 v14; // [rsp+48h] [rbp-40h]
  unsigned __int64 v15; // [rsp+58h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  v1 = netnode_altval(*(_QWORD *)(a1 + 104), 3, 65);
  v13 = 0;
  v2 = sub_A390(a1, (__int64)v12, v1);
  v6 = v13;
  v7 = v2;
  if ( (_BYTE)v2 )
  {
    sub_13640((__int64 *)&v10, a1, (__int64)v12, v3, v4, v5);
    v9 = byte_190C8;
    if ( v11 )
      v9 = v10;
    sub_CA10((__int64)"%s\n", v9);
    if ( v10 )
    {
      v11 = 0;
      qfree(v10);
    }
  }
  if ( v6 )
    qfree(v6);
  return v7;
}
