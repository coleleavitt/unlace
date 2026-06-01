__int64 __fastcall sub_2EDB70(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int i; // ebx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // r15d
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // rbx
  _QWORD v12[2]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v16[11]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 608);
  v12[0] = 0;
  v12[1] = 0;
  v13[0] = 1;
  v13[1] = 0;
  if ( v1 )
  {
    for ( i = 0; i < *(_DWORD *)(v1 - 4); ++i )
    {
      v4 = v1 + 104LL * i;
      if ( *(_DWORD *)v4 == 2 )
      {
        v14[0] = 0;
        v14[1] = 0;
        v15[0] = 1;
        v15[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v15);
        v5 = *(_QWORD *)(v4 + 32);
        BYTE4(v15[0]) &= ~1u;
        v6 = 0;
        for ( LODWORD(v15[0]) = 1; v5; ++v6 )
        {
          if ( v6 >= *(_DWORD *)(v5 - 4) )
            break;
          if ( !(unsigned __int8)sub_1374270(*(_QWORD *)(a1 + 616), *(_QWORD *)(v5 + 8LL * v6)) )
            sub_2FC4A0(qword_1C7F2C0, v14, *(_QWORD *)(v4 + 40) + 32LL * v6, v14);
          v5 = *(_QWORD *)(v4 + 32);
        }
        v16[1] = 0;
        v7 = *(_DWORD *)(a1 + 424);
        v8 = *(_QWORD *)(a1 + 416);
        v16[0] = *(_QWORD *)(v4 + 88);
        v9 = sub_2EB230(v8, v7, v16);
        sub_2FFE00(v16, *(_QWORD *)(v9 + 16));
        sub_25A130((char *)v16);
        sub_25A130((char *)v14);
        v1 = *(_QWORD *)(a1 + 608);
        if ( !v1 )
          break;
      }
    }
  }
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  return sub_182CBA0(v10, v13);
}

