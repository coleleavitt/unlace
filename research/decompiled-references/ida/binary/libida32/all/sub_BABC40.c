__int64 __fastcall sub_BABC40(__int64 **a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 *v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rax

  v3 = sub_BA5F70(a1, a2);
  if ( !(_BYTE)v3 )
    return 0;
  v4 = *a1;
  v5 = v3;
  v6 = **a1;
  v7 = *(__int64 (**)())(v6 + 5464);
  if ( v7 == sub_BA2EC0 )
    goto LABEL_3;
  if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(v4, a2) )
    return 0;
  v4 = *a1;
  v6 = **a1;
LABEL_3:
  v8 = *(__int64 (**)())(v6 + 5520);
  if ( v8 == sub_BA2F30 )
    return v5;
  else
    return ((__int64 (__fastcall *)(__int64 *, __int64))v8)(v4, a2);
}

