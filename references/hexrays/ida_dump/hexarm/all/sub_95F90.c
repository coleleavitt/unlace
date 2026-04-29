__int64 __fastcall sub_95F90(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // r12
  _DWORD *v9; // rax
  _DWORD *v10; // r13
  __int64 v11; // [rsp+8h] [rbp-C0h]
  _BYTE v12[16]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v14; // [rsp+40h] [rbp-88h]
  __int128 v15; // [rsp+48h] [rbp-80h]
  _QWORD v16[3]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v17; // [rsp+78h] [rbp-50h]
  unsigned __int64 v18; // [rsp+88h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) == 8
    && (v5 = sub_11C2E0(a2, 0), (v6 = v5) != 0)
    && (v7 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(unsigned int *)(v5 + 4), 1), !HIDWORD(v7))
    && (v8 = sub_32AEF0(v7, 4, 1), v8 < 0) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    sub_123480(v12, a2 + 64);
    v2 = sub_127290(v12, v11, 4, 0);
    if ( (_BYTE)v2 )
    {
      v13[0] = 0;
      v13[1] = 0;
      v14 = 0;
      v15 = 0;
      sub_127A20(a1, v13, a2 + 64, 0);
      v9 = (_DWORD *)sub_A94E0(a1, v13, *(_QWORD *)(a2 + 8), 0, 1);
      v10 = v9;
      if ( v9
        && *v9 == 13
        && (unsigned __int8)sub_11F7C0(v9 + 12, v16, 1)
        && v16[0] == 1
        && (unsigned __int8)sub_1255A0(v10 + 8, v12, 0)
        && (v2 = sub_1255A0(v10 + 16, v12, 0), (_BYTE)v2) )
      {
        memset(v16, 0, sizeof(v16));
        v17 = 0;
        sub_127A20(a1, v16, v12, 0);
        if ( sub_A97D0(a1, v16, *(_QWORD *)(a2 + 8), v10, 1) )
        {
          v2 = 0;
        }
        else
        {
          sub_11CFE0(v10);
          sub_120540(v6, v11, v8);
          *(_DWORD *)a2 = 13;
        }
        sub_93580(v16);
      }
      else
      {
        v2 = 0;
      }
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(v14);
      }
      qfree(v13[0]);
    }
    sub_11C7E0(v12);
  }
  else
  {
    return 0;
  }
  return v2;
}
