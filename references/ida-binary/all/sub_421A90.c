__int64 __fastcall sub_421A90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  const char *v3; // rdx
  const char *v4; // rdx
  __int64 v6; // rbp
  const char *v7; // rdx
  _QWORD *v8; // rdx

  if ( *(_QWORD *)(a1 + 360) == a2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 336) + 104 * a2;
  v3 = &s1;
  if ( *(_QWORD *)(v2 + 8) )
    v3 = *(const char **)v2;
  if ( (unsigned int)sub_1698A0(1, (int)"AUTOHIDE REGISTRY\nHIDECANCEL\nDo you really want to switch to '%s'?", v3) != 1 )
    return 0;
  v6 = sub_426230(1, "AUTOHIDE REGISTRY\nHIDECANCEL\nDo you really want to switch to '%s'?", v4);
  v8 = (_QWORD *)(sub_426230(1, "AUTOHIDE REGISTRY\nHIDECANCEL\nDo you really want to switch to '%s'?", v7) + 64);
  if ( *(_QWORD *)(v2 + 8) )
    return sub_416F40(v6, *(const void **)v2, v8, 0);
  else
    return sub_416F40(v6, &s1, v8, 0);
}
