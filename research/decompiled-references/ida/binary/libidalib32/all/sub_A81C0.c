__int64 __fastcall sub_A81C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v5; // r13
  int v6; // edx
  _QWORD *v7; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+8h] [rbp-70h]
  int v9; // [rsp+10h] [rbp-68h]
  int v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int128 v12; // [rsp+30h] [rbp-48h]
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  v2 = dbg;
  *(_OWORD *)(a1 + 8) = 0;
  sub_A7EC0((__int64 *)a1, *(int *)(v2 + 64));
  v7 = a2;
  v3 = 0;
  v8 = 0;
  v9 = 0;
  if ( a2 )
  {
    do
    {
      if ( *(_DWORD *)(dbg + 64LL) <= v3 )
        break;
      v5 = v3;
      v6 = *(unsigned __int8 *)(*a2 + ((unsigned __int64)v3 >> 3));
      if ( _bittest(&v6, v3 & 7) )
      {
        sub_9E3F0((__int64)&v10, (int *)&v7);
      }
      else
      {
        v10 = -2;
        v11 = -1;
        v12 = 0;
      }
      sub_9CC30(*(_QWORD *)a1 + 32 * v5, (__int64)&v10);
      if ( v10 >= -1 && v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree();
      }
      sub_9E4D0((__int64)&v7);
      v3 = v8;
    }
    while ( (int)v8 >= 0 );
  }
  return a1;
}

