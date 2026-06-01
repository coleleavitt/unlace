__int64 __fastcall sub_17414C0(__int64 a1, unsigned int *a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // r13
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  __int64 v14; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v16; // [rsp+18h] [rbp-70h]
  _QWORD v17[13]; // [rsp+20h] [rbp-68h] BYREF

  v3 = *((__int64 **)a2 + 2);
  v16 = 0x600000000LL;
  v4 = &v3[a2[6]];
  ptr = v17;
  if ( v4 == v3 )
  {
    v7 = 0;
    v11 = v17;
  }
  else
  {
    v5 = *v3;
    v6 = v3 + 1;
    v7 = 1;
    LODWORD(v16) = 1;
    v17[0] = v5;
    v8 = 1;
    if ( v4 == v6 )
    {
      v7 = 1;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v9 = v7 + 1;
          v10 = *v6;
          if ( v9 > HIDWORD(v16) )
            break;
          ++v6;
          *((_QWORD *)ptr + v8) = v10;
          v8 = (unsigned int)(v16 + 1);
          LODWORD(v16) = v8;
          v7 = (unsigned int)v8;
          if ( v4 == v6 )
            goto LABEL_5;
        }
        v14 = *v6;
        sub_2237220(&ptr, v17, v9, 8);
        ++v6;
        *((_QWORD *)ptr + (unsigned int)v16) = v14;
        v7 = (unsigned int)(v16 + 1);
        v8 = v7;
        LODWORD(v16) = v16 + 1;
      }
      while ( v4 != v6 );
    }
LABEL_5:
    v11 = ptr;
  }
  v12 = sub_1AF87E0(*(_QWORD *)(*(_QWORD *)a1 + 760LL), v11, v7, *a2, a2[3], a2[1]);
  if ( ptr != v17 )
    free(ptr);
  return v12;
}
