__int64 __fastcall dyld4::RemoteNotificationResponder::blockOnSynchronousEvent(
        dyld4::RemoteNotificationResponder *this,
        int a2)
{
  mach_msg_header_t v3; // [xsp+Ch] [xbp-64h] BYREF

  return dyld4::RemoteNotificationResponder::sendMessage((__int64)this, a2 + 0x4000, 0x18u, &v3);
}
