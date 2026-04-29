unsigned __int64 __fastcall sub_1A8500(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v4; // r12
  int i; // eax
  __int64 v6; // [rsp+8h] [rbp-5080h] BYREF
  _BYTE v7[4]; // [rsp+10h] [rbp-5078h] BYREF
  _BYTE v8[8228]; // [rsp+14h] [rbp-5074h] BYREF
  __int64 v9; // [rsp+2038h] [rbp-3050h]
  int v10; // [rsp+2044h] [rbp-3044h]
  _BYTE v11[4104]; // [rsp+4050h] [rbp-1038h] BYREF
  unsigned __int64 v12; // [rsp+5058h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1496);
  if ( under_debugger || *(_BYTE *)(v1 + 1424) )
  {
    v2 = *(_QWORD *)(v1 + 1024);
    v6 = 0;
    *(_DWORD *)(v2 + 140) = 0;
    sub_312E90(v2, &v6);
    sub_312B40(&v6);
    if ( (unsigned __int8)qgetenv("IDA_DUMPDIR", v2 + 112) && *(_QWORD *)(v2 + 120) > 1u )
    {
      v4 = *(_QWORD *)(v2 + 112);
      qmkdir(v4, 511);
      v9 = 0;
      v10 = 0;
      qmakepath(v11, 4096, v4, "*.dmp", 0);
      for ( i = qfindfirst(v11, v7, 0); !i; i = qfindnext(v7) )
      {
        qmakepath(v11, 4096, v4, v8, 0);
        qunlink(v11);
      }
      qfindclose(v7);
    }
  }
  return v12 - __readfsqword(0x28u);
}
