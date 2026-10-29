unsigned __int64 __fastcall sub_459680(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // rax
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE ptr[24]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-40h]
  int v11; // [rsp+30h] [rbp-38h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v1 = switch_dbctx(*(int *)(a1 + 360));
  v2 = *(_QWORD **)(v1 + 1672);
  *(_OWORD *)ptr = 0;
  sub_630CA0(*v2, 26, ptr, 16);
  if ( *(_QWORD *)&ptr[8] - *(_QWORD *)ptr < *(_QWORD *)(a1 + 456) )
  {
    v11 = -1;
    memset(ptr, 0, sizeof(ptr));
    v10 = 0;
    rangeset_t_add2((int)ptr);
    if ( *(_DWORD *)(v1 + 1512) == 4 )
      rangeset_t_add2((int)ptr);
    v3 = *(_QWORD *)(a1 + 456);
    while ( 1 )
    {
      v4 = sub_42E200((__int64)ptr, v3);
      v5 = v4;
      if ( v4 == -1 )
        break;
      if ( (unsigned __int8)sub_454640(v1, (__int64)ptr, v4, v3) )
      {
        v7 = *(_QWORD *)(a1 + 456);
        v8[0] = v5;
        v8[1] = v5 + v7;
        sub_457BE0(v1, v8);
      }
    }
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
    }
  }
  return sub_459560(a1 + 344, 8u, 0, 0xFFFFFFFF);
}
