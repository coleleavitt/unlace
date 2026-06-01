__int64 __fastcall sub_4C9A90(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rbx
  _DWORD *v4; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // rbp
  unsigned int *v7; // r15
  unsigned int v8; // esi
  unsigned int v10; // [rsp+4h] [rbp-4054h]
  __int64 v11; // [rsp+8h] [rbp-4050h]
  _DWORD v12[4098]; // [rsp+10h] [rbp-4048h] BYREF
  unsigned __int64 v13; // [rsp+4018h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 1536);
  v13 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 1480);
  *(_BYTE *)(v1 + 704) = 0;
  v3 = *(_QWORD *)(v2 + 2320);
  v11 = v2;
  if ( sub_8954D0(v3, 0) )
  {
    v4 = *(_DWORD **)(v3 + 48);
    v5 = (unsigned int)(v4[1] - *v4);
    if ( v4[1] != *v4 )
    {
      v10 = 0;
      do
      {
        v6 = 4096;
        v7 = v12;
        if ( v5 <= 0x1000 )
          v6 = v5;
        sub_895C40(*(_QWORD *)(v11 + 2320), v10, v12, v6);
        do
        {
          v8 = *v7++;
          sub_4C7E90(v1, v8);
        }
        while ( &v12[v6] != v7 );
        v10 += v6;
        v5 -= v6;
      }
      while ( v5 );
    }
  }
  register_undo_handler(214, sub_4C99E0, 0, 1);
  return register_undo_handler(215, sub_4C9930, 0, 1);
}

