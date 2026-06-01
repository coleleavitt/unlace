__int64 __fastcall sub_123210(__int64 a1, double a2)
{
  __int64 v3; // rbx
  unsigned int v4; // r13d
  unsigned int v5; // ebp
  __int64 i; // r12
  unsigned int *v7; // rax
  int v8; // ebx
  __int16 v9; // [rsp+2h] [rbp-36h] BYREF
  int v10; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 56) )
    return 0;
  v9 = 0;
  v10 = -1;
  if ( (int)sub_8F730(
              (__int64)"Move multiple segments\n"
                       "\n"
                       "<~T~arget address:N::18::>\n"
                       "\n"
                       "<#Correct relocatable references#~F~ix up the relocated segments:C>>\n",
              &v10,
              &v9) <= 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = -1;
  v5 = -1;
  for ( i = v3 + 8LL * *(_QWORD *)(a1 + 56); i != v3; v3 += 8 )
  {
    v7 = (unsigned int *)getnseg();
    if ( v7 )
    {
      if ( v5 == -1 )
        v5 = *v7;
      v4 = v7[1];
    }
  }
  v8 = v10 - v5;
  if ( sub_121C70(v5, v4, v10 - v5, a2) )
    sub_121AD0(v5, v4, v8);
  return 1;
}

