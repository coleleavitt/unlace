__int64 __fastcall sub_123880(__int64 a1, double a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rbp
  __int64 i; // r12
  unsigned __int64 *v7; // rax
  __int64 v8; // rbx
  __int16 v9; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 56) )
    return 0;
  v9 = 0;
  v10[0] = -1;
  if ( (int)sub_8F810(
              (__int64)"Move multiple segments\n"
                       "\n"
                       "<~T~arget address:N::18::>\n"
                       "\n"
                       "<#Correct relocatable references#~F~ix up the relocated segments:C>>\n",
              v10,
              &v9) <= 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = -1;
  v5 = -1;
  for ( i = v3 + 8LL * *(_QWORD *)(a1 + 56); i != v3; v3 += 8 )
  {
    v7 = (unsigned __int64 *)getnseg();
    if ( v7 )
    {
      if ( v5 == -1 )
        v5 = *v7;
      v4 = v7[1];
    }
  }
  v8 = v10[0] - v5;
  if ( sub_122240(v5, v4, v10[0] - v5, a2) )
    sub_122090(v5, v4, v8);
  return 1;
}

