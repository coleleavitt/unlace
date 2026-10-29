void __fastcall sub_2ED900(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  char v14; // dl
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // [rsp+10h] [rbp-88h]
  __int64 v18; // [rsp+20h] [rbp-78h] BYREF
  __int64 v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+38h] [rbp-60h]
  unsigned __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h]
  int v24; // [rsp+50h] [rbp-48h]
  char v25; // [rsp+54h] [rbp-44h]
  __int64 v26; // [rsp+58h] [rbp-40h]

  v4 = *a2;
  v5 = *(_DWORD *)(a1 + 424);
  v6 = *(_QWORD *)(a1 + 416);
  v23 = 0;
  v22 = v4;
  v7 = sub_2EB230(v6, v5, &v22);
  v8 = *(_QWORD *)(a1 + 608);
  if ( v8 )
  {
    v9 = v8 + 104LL * *(unsigned int *)(v8 - 4);
    if ( v8 != v9 )
    {
      v17 = *(_QWORD *)(v7 + 16);
      do
      {
        while ( *(_QWORD *)(v8 + 88) != *a2 || *(_DWORD *)v8 != 2 )
        {
          v8 += 104;
          if ( v9 == v8 )
            return;
        }
        v10 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 1;
        v21 = 0;
        sub_182CBA0(qword_1C7F2C0, &v20);
        v11 = *(_QWORD *)(v8 + 32);
        BYTE4(v20) &= ~1u;
        for ( LODWORD(v20) = 1; v11; ++v10 )
        {
          if ( v10 >= *(_DWORD *)(v11 - 4) )
            break;
          if ( !(unsigned __int8)sub_1374270(*(_QWORD *)(a1 + 616), *(_QWORD *)(v11 + 8LL * v10)) )
            sub_2FC4A0(qword_1C7F2C0, &v18, *(_QWORD *)(v8 + 40) + 32LL * v10, &v18);
          v11 = *(_QWORD *)(v8 + 32);
        }
        sub_2FC530(&v22, v8 + 48, &v18);
        v12 = v18;
        LODWORD(v18) = v22;
        LODWORD(v22) = v12;
        v13 = v19;
        v19 = v23;
        v23 = v13;
        v14 = BYTE4(v18) & 0xFC | BYTE4(v22) & 2 | BYTE4(v22) & 1;
        BYTE4(v22) = BYTE4(v18) & 1 | BYTE4(v22) & 0xFC | BYTE4(v18) & 2;
        BYTE4(v18) = v14;
        v15 = v24;
        v24 = v20;
        LODWORD(v20) = v15;
        v16 = v26;
        v26 = v21;
        v21 = v16;
        LOBYTE(v16) = BYTE4(v20) & 0xFC | v25 & 2 | v25 & 1;
        v25 = BYTE4(v20) & 1 | v25 & 0xFC | BYTE4(v20) & 2;
        BYTE4(v20) = v16;
        sub_25A130((char *)&v22);
        sub_2FFE00(&v22, v17);
        v8 += 104;
        sub_25A130((char *)&v22);
        sub_25A130((char *)&v18);
      }
      while ( v9 != v8 );
    }
  }
}

