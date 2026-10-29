__int64 __fastcall sub_4F5210(_QWORD *a1, _BYTE *a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r15
  __int64 result; // rax
  unsigned int *v8; // rax
  _BYTE *v9; // rbp
  const char *v10; // rsi
  _BYTE *v11; // r12
  unsigned int *v12; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v4 = (unsigned __int64)&a2[a3];
  v15 = __readfsqword(0x28u);
  result = 0;
  if ( a2 < &a2[a3] )
  {
    v8 = sub_4EE820((__int64)(a1 + 194), a4);
    if ( v8 )
    {
      v12 = v8;
      v9 = a2;
      get_segm_para(v8);
      if ( (sub_614FB0(*a1, 48) & 1) != 0 )
      {
        if ( (unsigned __int8)sub_615160(*a1, 44, 64) )
        {
          v14 = 0;
          ptr = nullptr;
          sub_4F9200(a1, &ptr, v12, 0);
          v10 = haystack;
          if ( (_QWORD)v14 )
            v10 = (const char *)ptr;
          v11 = (_BYTE *)qstpncpy(a2, v10, a3);
          if ( ptr )
          {
            *(_QWORD *)&v14 = 0;
            qfree(ptr);
          }
        }
        else
        {
          v11 = &a2[b2a32(a2)];
        }
        if ( (unsigned __int64)v11 >= v4 )
        {
          if ( !under_debugger )
            interr(518);
          JUMPOUT(0x2BDF58);
        }
        v9 = v11 + 1;
        *v11 = 58;
        if ( (unsigned __int64)(v11 + 1) >= v4 )
        {
          *(_BYTE *)(v4 - 1) = 0;
          v9 = (_BYTE *)(v4 - 1);
        }
      }
      return &v9[b2a32(v9)] - a2;
    }
    *a2 = 48;
    if ( (unsigned __int64)(a2 + 1) >= v4 )
    {
      *(_BYTE *)(v4 - 1) = 58;
    }
    else
    {
      v9 = a2 + 2;
      a2[1] = 58;
      if ( (unsigned __int64)(a2 + 2) < v4 )
        return &v9[b2a32(v9)] - a2;
    }
    *(_BYTE *)(v4 - 1) = 0;
    v9 = (_BYTE *)(v4 - 1);
    return &v9[b2a32(v9)] - a2;
  }
  return result;
}

