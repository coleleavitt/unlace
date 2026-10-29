__int64 __fastcall sub_8EBB20(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 *v10; // [rsp+20h] [rbp-A8h]
  void *v11; // [rsp+38h] [rbp-90h]
  __int64 v12; // [rsp+40h] [rbp-88h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h]
  __int64 v14; // [rsp+70h] [rbp-58h]
  __int64 v15; // [rsp+78h] [rbp-50h]
  void *v16; // [rsp+88h] [rbp-40h]
  __int64 v17; // [rsp+98h] [rbp-30h] BYREF

  result = *(unsigned int *)(*(_QWORD *)(a1 + 104) + 712LL);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(a1 + 112);
    if ( *(_BYTE *)(result + 471) )
    {
      sub_F96A60(v9);
      sub_FA31B0((__int64)v9);
      if ( v16 != &v17 )
        operator delete(v16, v17 + 1);
      v2 = v14;
      if ( v14 )
      {
        v3 = v15;
        v4 = (*(_DWORD *)(v14 + 8))-- == 1;
        if ( v4 )
          sub_15D7BC0(v3, v2);
      }
      if ( ptr )
        sub_186B220(ptr);
      result = sub_2334C0(&v12);
      if ( v11 )
        result = sub_186B220(v11);
      v5 = v10;
      if ( v10 )
      {
        result = *((unsigned int *)v10 - 1);
        v6 = (unsigned __int64)&v10[result];
        if ( (unsigned __int64)v10 >= v6 )
          return sub_186B220(v5 - 1);
        do
        {
          while ( 1 )
          {
            v7 = *v5;
            if ( *v5 )
            {
              v8 = v9[1];
              v4 = (*(_DWORD *)(v7 + 8))-- == 1;
              if ( v4 )
                break;
            }
            if ( (unsigned __int64)++v5 >= v6 )
              goto LABEL_20;
          }
          result = sub_15D7BC0(v8, v7);
          ++v5;
        }
        while ( (unsigned __int64)v5 < v6 );
LABEL_20:
        v5 = v10;
        if ( v10 )
          return sub_186B220(v5 - 1);
      }
    }
  }
  return result;
}

