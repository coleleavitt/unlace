__int64 __fastcall sub_96550(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // r12
  int v9; // r8d
  int v10; // r9d
  _DWORD *v11; // rax
  _DWORD *v12; // r13
  int v13; // r8d
  int v14; // r9d
  __int64 *v15; // [rsp+0h] [rbp-C8h]
  __int64 v16; // [rsp+8h] [rbp-C0h]
  int v17; // [rsp+8h] [rbp-C0h]
  __int64 v18; // [rsp+8h] [rbp-C0h]
  int v19; // [rsp+10h] [rbp-B8h]
  int v20; // [rsp+18h] [rbp-B0h]
  __int64 *v21; // [rsp+18h] [rbp-B0h]
  __int64 v22[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v23[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v24; // [rsp+40h] [rbp-88h]
  __int128 v25; // [rsp+48h] [rbp-80h]
  _QWORD v26[3]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v27; // [rsp+78h] [rbp-50h]
  unsigned __int64 v28; // [rsp+88h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) == 8
    && (v5 = sub_11C8A0(a2, 0), (v6 = v5) != 0)
    && (v7 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(unsigned int *)(v5 + 4), 1), !HIDWORD(v7))
    && (v8 = sub_32ABC0(v7, 4, 1), v8 < 0) )
  {
    v15 = v22;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    sub_123A40(v22);
    v2 = sub_127850(v22, v16, 4, 0);
    if ( (_BYTE)v2 )
    {
      v23[0] = 0;
      v23[1] = 0;
      v24 = 0;
      v25 = 0;
      sub_127FE0(a1, (__int64)v23, a2 + 64, 0, v9, v10, (int)v22, v16, (int)v23, v20, v22[0]);
      v11 = (_DWORD *)sub_A9AA0(a1, v23, *(_QWORD *)(a2 + 8), 0, 1);
      v12 = v11;
      if ( v11
        && *v11 == 13
        && (unsigned __int8)sub_11FD80(v11 + 12, v26, 1)
        && v26[0] == 1
        && (unsigned __int8)sub_125B60(v12 + 8, v15, 0)
        && (v2 = sub_125B60(v12 + 16, v15, 0), (_BYTE)v2) )
      {
        memset(v26, 0, sizeof(v26));
        v27 = 0;
        sub_127FE0(a1, (__int64)v26, (__int64)v15, 0, v13, v14, (int)v15, v17, v19, (int)v26, v22[0]);
        if ( sub_A9D90(a1, v21, *(_QWORD *)(a2 + 8), v12, 1) )
        {
          v2 = 0;
        }
        else
        {
          sub_11D5A0(v12);
          sub_120B00(v6, v18, v8);
          *(_DWORD *)a2 = 13;
        }
        sub_93B40(v21);
      }
      else
      {
        v2 = 0;
      }
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v24);
      }
      qfree(v23[0]);
    }
    sub_11CDA0(v15);
  }
  else
  {
    return 0;
  }
  return v2;
}
