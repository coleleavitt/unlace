void __fastcall sub_1607430(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  _BYTE *v5; // rsi
  _QWORD *v6; // r8
  unsigned __int8 (__fastcall *v7)(_QWORD, _BYTE *); // rbx
  __int64 v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h]
  _BYTE v18[72]; // [rsp+30h] [rbp-48h] BYREF

  v5 = (_BYTE *)a3;
  if ( a4 )
  {
    v6 = *(_QWORD **)a3;
    v7 = (unsigned __int8 (__fastcall *)(_QWORD, _BYTE *))a4;
    v17 = 0x200000000LL;
    v8 = *(unsigned int *)(a3 + 8);
    ptr = v18;
    v9 = v6;
    v10 = &v6[v8];
    if ( v10 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)((*v9 & 0xFFFFFFFFFFFFFFF8LL) + 48) & 0xFFFFFFFFFFFFFFF0LL);
          v12 = (unsigned int)*(unsigned __int8 *)(v11 + 16) - 25;
          if ( (unsigned int)v12 > 1 )
            v11 = sub_F63050(v11, v5, v12, a4);
          if ( v7(*(_QWORD *)(v11 + 24), v5) )
            break;
          if ( v10 == ++v9 )
            goto LABEL_11;
        }
        a4 = (unsigned int)v17;
        v5 = (_BYTE *)HIDWORD(v17);
        v13 = (unsigned int)v17 + 1LL;
        v14 = *v9 & 0xFFFFFFFFFFFFFFF8LL | 3;
        if ( v13 > HIDWORD(v17) )
        {
          v5 = v18;
          v15 = *v9 & 0xFFFFFFFFFFFFFFF8LL | 3;
          sub_2237220(&ptr, v18, v13, 8);
          a4 = (unsigned int)v17;
          v14 = v15;
        }
        ++v9;
        *((_QWORD *)ptr + a4) = v14;
        LODWORD(v17) = v17 + 1;
      }
      while ( v10 != v9 );
    }
LABEL_11:
    sub_1606E40(a1, (char *)&ptr, a2);
    if ( ptr != v18 )
      free(ptr);
  }
  else
  {
    sub_1606E40(a1, (char *)a3, a2);
  }
}
