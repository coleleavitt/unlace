__int64 __fastcall sub_179AA00(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  unsigned __int8 *v3; // rdx
  unsigned __int16 *v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int8 v6; // al
  unsigned __int8 *v7; // rdx

  v1 = *(_DWORD *)sub_B73640(**(_QWORD **)a1);
  result = 1;
  if ( (v1 & 0x8000) == 0 )
  {
    v3 = *(unsigned __int8 **)(a1 + 8);
    if ( v3[1] )
    {
      return *v3;
    }
    else
    {
      v4 = (unsigned __int16 *)sub_B73640(**(_QWORD **)a1);
      v6 = sub_C0D200(
             v4,
             *(__int64 **)(*(_QWORD *)(a1 + 16) + 248LL),
             (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 48LL)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 <= 1,
             *(_QWORD **)(a1 + 24),
             v5);
      v7 = *(unsigned __int8 **)(a1 + 8);
      *v7 = v6;
      result = *v7;
      v7[1] = 1;
    }
  }
  return result;
}
